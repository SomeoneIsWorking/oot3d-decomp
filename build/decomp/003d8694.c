// OoT3D decomp @ 003d8694  name=FUN_003d8694  size=756

void FUN_003d8694(int param_1,int param_2)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStack_38;
  float fStack_34;
  float fStack_30;

  uVar1 = uRam003d898c;
  FUN_003705a0(param_1 + 0x6c);
  uVar3 = uRam003d8994;
  fVar2 = fRam003d8990;
  if (*(short *)(param_1 + 0x25e) == 0) {
    FUN_00370378(param_1 + 0xbc,0x4800,uRam003d8994);
    FUN_00370378(param_1 + 0x262,0x4800,uVar3);
    FUN_00370378(param_1 + 0x264,0x4800,uVar3);
    fVar7 = fRam003d899c;
    fVar4 = fRam003d8998;
    fVar6 = *(float *)(param_1 + 0x3a0);
    FUN_0036f9d0(fVar6 * fVar2,param_2,param_1 + 0x28,0,(int)(short)(int)(fVar6 * fRam003d899c),
                 (int)(short)(int)(fVar6 * fRam003d8998),1,0xffffffff,10,0);
    if ((iRam003d89a0 < *(int *)(param_1 + 0x54)) && ((*(ushort *)(param_1 + 0x90) & 10) != 0)) {
      *(undefined4 *)(param_1 + 0x5c) = uVar1;
      *(undefined4 *)(param_1 + 0x58) = uVar1;
      *(undefined4 *)(param_1 + 0x54) = uVar1;
      *(undefined4 *)(param_1 + 0x6c) = uVar1;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffa;
      fVar6 = *(float *)(param_1 + 0x3a0);
      FUN_0036f9d0(fVar6 * fVar2,param_2,param_1 + 0x28,0,(int)(short)(int)(fVar6 * fVar7),
                   (int)(short)(int)(fVar6 * fVar4),0xf,0xffffffff,10,0);
    }
    if ((*(ushort *)(param_1 + 0x90) & 2) != 0) {
      FUN_00375bcc(param_1,uRam003d89a4);
      *(undefined2 *)(param_1 + 0x25e) = 1;
    }
  }
  else if (*(short *)(param_1 + 0x25e) == 1) {
    fStack_38 = *(float *)(param_1 + 0x28);
    fStack_34 = *(float *)(param_1 + 0x2c);
    fStack_30 = *(float *)(param_1 + 0x30);
    fVar7 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbc));
    fVar7 = fVar7 * fRam003d89a8;
    fVar6 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbc));
    fVar4 = fRam003d89ac;
    fVar6 = fVar6 * fRam003d89ac;
    fVar8 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
    fVar9 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbc));
    fVar10 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
    iVar5 = 0;
    do {
      FUN_00363ec4(param_2,&fStack_38,uRam003d89b0,uRam003d89b0,500,0x32);
      iVar5 = iVar5 + 1;
      fStack_38 = fStack_38 + fVar6 * fVar8;
      fStack_34 = fStack_34 + fVar7;
      fStack_30 = fStack_30 + fVar9 * fVar4 * fVar10;
    } while (iVar5 < 4);
    FUN_00363ec4(param_2,param_1 + 8,uRam003d89b0,uRam003d89b0,
                 (int)(short)(int)(*(float *)(param_1 + 0x3a0) * fRam003d89b8),
                 (int)(short)(int)(*(float *)(param_1 + 0x3a0) * fRam003d89b4));
    FUN_0037572c(uRam003d89bc,param_1);
    *(undefined4 *)(param_1 + 0xc4) = uRam003d89c0;
    *(float *)(param_1 + 0xcc) = fVar2;
    *(short *)(param_1 + 0xbc) = *(short *)(param_1 + 0xbc) + -0x4000;
    *(undefined4 *)(param_1 + 0x70) = uVar1;
    *(undefined4 *)(param_1 + 100) = uVar1;
    FUN_00375d3c(param_2,param_2 + 0x208c,param_1,8);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffdf;
    *(undefined2 *)(param_1 + 0x25e) = 300;
    *(undefined4 *)(param_1 + 600) = uRam003d89c4;
    return;
  }
  return;
}
