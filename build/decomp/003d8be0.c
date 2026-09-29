// OoT3D decomp @ 003d8be0  name=FUN_003d8be0  size=672

void FUN_003d8be0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_34;
  float local_30;
  float local_2c;

  uVar1 = DAT_003d8e84;
  if (((*DAT_003d8e80 & 1) == 0) &&
     (iVar5 = FUN_003679b4(DAT_003d8e80), puVar2 = DAT_003d8e88, iVar5 != 0)) {
    *DAT_003d8e88 = uVar1;
    puVar2[1] = uVar1;
    puVar2[2] = uVar1;
  }
  FUN_003705a0(param_1 + 0x6c);
  uVar3 = DAT_003d8e90;
  if (*(short *)(param_1 + 0x1c) == 0) {
    FUN_00370378(param_1 + 0xbc,0x4800,DAT_003d8e94);
    FUN_0036f9d0(uVar3,param_2,param_1 + 0x28,0,0xc,5,1,0xffffffff,10,0);
    if ((DAT_003d8e98 < *(int *)(param_1 + 0x54)) && ((*(ushort *)(param_1 + 0x90) & 10) != 0)) {
      *(undefined4 *)(param_1 + 0x5c) = uVar1;
      *(undefined4 *)(param_1 + 0x58) = uVar1;
      *(undefined4 *)(param_1 + 0x54) = uVar1;
      *(undefined4 *)(param_1 + 0x6c) = uVar1;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffa;
      FUN_0036f9d0(uVar3,param_2,param_1 + 0x28,0,0xc,5,0xf,0xffffffff,10,0);
    }
    if ((*(ushort *)(param_1 + 0x90) & 2) != 0) {
      FUN_00375bcc(param_1,DAT_003d8e9c);
      *(undefined2 *)(param_1 + 0x1c) = 1;
    }
  }
  else if (*(short *)(param_1 + 0x1c) == 1) {
    FUN_0036df4c(&local_34,param_1 + 0x28);
    fVar6 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbc));
    fVar6 = fVar6 * DAT_003d8ea0;
    fVar7 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbc));
    fVar4 = DAT_003d8ea4;
    fVar7 = fVar7 * DAT_003d8ea4;
    fVar8 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
    fVar9 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbc));
    fVar10 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
    iVar5 = 0;
    do {
      FUN_00363ec4(param_2,&local_34,DAT_003d8e88,DAT_003d8e88,500,0x32);
      iVar5 = iVar5 + 1;
      local_34 = local_34 + fVar7 * fVar8;
      local_30 = local_30 + fVar6;
      local_2c = local_2c + fVar9 * fVar4 * fVar10;
    } while (iVar5 < 4);
    FUN_00363ec4(param_2,param_1 + 8,DAT_003d8e88,DAT_003d8e88,500,100);
    FUN_0037572c(DAT_003d8ea8,param_1);
    *(undefined4 *)(param_1 + 0xc4) = DAT_003d8eac;
    *(undefined4 *)(param_1 + 0xcc) = uVar3;
    *(short *)(param_1 + 0xbc) = *(short *)(param_1 + 0xbc) + -0x4000;
    *(undefined4 *)(param_1 + 0x70) = uVar1;
    *(undefined4 *)(param_1 + 100) = uVar1;
    FUN_00375d3c(param_2,param_2 + 0x208c,param_1,8);
    *(undefined2 *)(param_1 + 0x1c) = 200;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffdf;
    *(undefined4 *)(param_1 + 0x228) = DAT_003d8eb0;
    return;
  }
  return;
}
