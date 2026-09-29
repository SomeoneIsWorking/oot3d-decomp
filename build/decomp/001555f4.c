// OoT3D decomp @ 001555f4  name=FUN_001555f4  size=624

void FUN_001555f4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;

  *(undefined1 *)(param_1 + 0x7d8) = 1;
  uVar1 = uRam00155868;
  iVar4 = iRam00155864;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x400;
  fVar7 = fRam0015586c;
  if (*(char *)(iVar4 + 6) == '\0') {
    uVar5 = 3;
  }
  else {
    uVar5 = 2;
  }
  if ((*(ushort *)(param_1 + 0x1a8) & 7) == 0) {
    fStack_34 = (float)FUN_003738a8(fRam0015586c);
    fStack_34 = fStack_34 + *(float *)(param_1 + 0x28);
    fVar6 = (float)FUN_003738a8(uRam00155870);
    fStack_30 = fVar6 + fVar7 + *(float *)(param_1 + 0x2c);
    fStack_2c = (float)FUN_003738a8(fVar7);
    fStack_2c = fStack_2c + *(float *)(param_1 + 0x30);
    uStack_40 = uVar1;
    uStack_3c = uVar1;
    uStack_38 = uVar1;
    uStack_4c = uVar1;
    uStack_48 = uRam00155874;
    uStack_44 = uVar1;
    fVar7 = (float)FUN_00371e50(uRam00155878);
    FUN_00367f34(fVar7 + fRam0015587c,param_2,uVar5,&fStack_34,&uStack_40,&uStack_4c,0,0,0x96);
  }
  FUN_003731e0(param_1 + 0x5c0);
  uVar5 = uRam00155884;
  sVar2 = *(short *)(param_1 + 0x1b8) + 0x14;
  *(short *)(param_1 + 0x1b8) = sVar2;
  if (0xff < sVar2) {
    *(undefined2 *)(param_1 + 0x1b8) = 0xff;
  }
  FUN_00373500(uVar1,uVar5,uRam00155880,param_1 + 0x20c);
  uVar3 = uRam00155888;
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 100);
  FUN_00373500(uRam0015588c,uVar5,uVar3,param_1 + 100);
  uVar3 = uRam00155894;
  fVar7 = fRam00155890;
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) - fRam00155890;
  FUN_00376340(uRam00155898,uRam00155898,uVar3,param_2,param_1,4);
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + fVar7;
  if (*(short *)(param_1 + 0x498) == 0) {
    if (*(short *)(param_1 + 0x1d2) == 0) {
      *(undefined2 *)(param_1 + 0x498) = 1;
      uVar3 = FUN_0036ae14(param_1 + 0x5c0,0x17);
      uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(param_1 + 0x1fc) = uVar3;
      FUN_00375c08(uVar5,uVar1,uVar3,uVar1,param_1 + 0x5c0,0x17,3);
    }
  }
  else {
    iVar4 = FUN_003736fc(*(undefined4 *)(param_1 + 0x1fc),uVar5,param_1 + 0x5c0);
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0x1fc) = uRam0015589c;
      FUN_00370350(uVar1,param_1 + 0x5c0,0x18);
    }
  }
  if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
    *(undefined4 *)(param_1 + 100) = uVar1;
  }
  if (*(short *)(param_1 + 0x1d0) == 0) {
    FUN_00374a58(uVar1,param_1 + 0x5c0,0x19);
    uVar5 = FUN_0036ae14(param_1 + 0x5c0,0x19);
    uVar1 = uRam001558a0;
    uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x1fc) = uVar5;
    *(undefined4 *)(param_1 + 0x1a4) = uVar1;
    *(undefined2 *)(param_1 + 0x1d0) = 0x4b;
  }
  return;
}
