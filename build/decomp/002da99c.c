// OoT3D decomp @ 002da99c  name=FUN_002da99c  size=308

undefined4 FUN_002da99c(int param_1,undefined4 *param_2)

{
  short sVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  ushort uVar5;
  bool bVar6;

  uVar3 = 0;
  if (*(int *)(param_1 + 0x1a8) != 0) {
    uVar3 = FUN_002da60c(*(undefined4 *)(param_1 + 0x10));
    switch(uVar3) {
    case 0:
    case 1:
    case 2:
    case 3:
      iVar4 = DAT_002daae4;
      break;
    case 4:
      iVar4 = DAT_002daae8;
      break;
    default:
      iVar4 = 0;
    }
    bVar6 = iVar4 != DAT_002daae4;
    *param_2 = *(undefined4 *)(param_1 + 0x3cc);
    param_2[1] = *(undefined4 *)(param_1 + 0x3d0);
    param_2[2] = *(undefined4 *)(param_1 + 0x3d4);
    param_2[3] = *(int *)(param_1 + 0x1a8) << 2;
    param_2[4] = *(undefined4 *)(param_1 + 0x3d8);
    iVar4 = 0;
    if (*(int *)(param_1 + 0x1a8) != 0) {
      iVar4 = *(int *)(param_1 + 0x1a8) * 6 + -2;
    }
    param_2[5] = iVar4;
    param_2[6] = 2;
    param_2[7] = 4;
    *(undefined2 *)(param_2 + 8) = 1;
    *(undefined2 *)((int)param_2 + 0x22) = 2;
    param_2[9] = 1;
    *(undefined2 *)(param_2 + 10) = 0x2100;
    *(undefined2 *)((int)param_2 + 0x2a) = 0x2100;
    *(undefined2 *)(param_2 + 0xb) = 1;
    *(undefined2 *)((int)param_2 + 0x2e) = 1;
    iVar4 = DAT_002daaec;
    sVar1 = (short)DAT_002daaec;
    *(short *)(param_2 + 0xc) = sVar1;
    *(short *)((int)param_2 + 0x32) = sVar1;
    *(short *)(param_2 + 0xd) = sVar1 + -2;
    uVar5 = (ushort)(iVar4 >> 0xe) | 0x300;
    *(short *)((int)param_2 + 0x36) = sVar1 + -0xb9;
    *(short *)(param_2 + 0xe) = sVar1 + -3;
    uVar2 = uVar5;
    if (bVar6) {
      uVar2 = 0x300;
    }
    *(undefined2 *)((int)param_2 + 0x3a) = 0x300;
    *(ushort *)(param_2 + 0xf) = uVar2;
    *(undefined2 *)((int)param_2 + 0x3e) = 0x300;
    *(short *)(param_2 + 0x10) = sVar1 + -2;
    *(short *)((int)param_2 + 0x42) = sVar1 + -0xb9;
    *(short *)(param_2 + 0x11) = sVar1 + -3;
    *(ushort *)((int)param_2 + 0x46) = uVar5;
    *(ushort *)(param_2 + 0x12) = uVar5;
    *(ushort *)((int)param_2 + 0x4a) = uVar5;
    *(undefined2 *)(param_2 + 0x13) = 0;
    uVar3 = 1;
  }
  return uVar3;
}
