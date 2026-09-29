// OoT3D decomp @ 004c43b0  name=FUN_004c43b0  size=240

undefined4 FUN_004c43b0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  int iVar5;

  uVar3 = 0;
  if (*(int *)(param_1 + 0x1a8) != 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    iVar1 = *(int *)(param_1 + 0x3e4);
    iVar5 = *(int *)(param_1 + 0x3e0);
    iVar2 = FUN_002da7b8(*(undefined4 *)(param_1 + 0x10));
    if (iVar2 < 4) {
      iVar2 = 4;
    }
    iVar2 = iVar5 * iVar1 * iVar2;
    *param_2 = (int)(iVar2 + ((uint)(iVar2 >> 0x1f) >> 0x1d)) >> 3;
    *(undefined2 *)(param_2 + 1) = 1;
    *(undefined1 *)((int)param_2 + 6) = 0;
    *(short *)(param_2 + 2) = (short)*(undefined4 *)(param_1 + 0x3e0);
    *(short *)((int)param_2 + 10) = (short)*(undefined4 *)(param_1 + 0x3e4);
    uVar3 = FUN_002da60c(*(undefined4 *)(param_1 + 0x10));
    uVar4 = (undefined2)DAT_004c44c8;
    switch(uVar3) {
    case 0:
    case 1:
    case 2:
    case 3:
      break;
    case 4:
      uVar4 = (undefined2)DAT_004c44cc;
      break;
    default:
      uVar4 = 0;
    }
    *(undefined2 *)(param_2 + 3) = uVar4;
    uVar3 = FUN_002da60c(*(undefined4 *)(param_1 + 0x10));
    uVar4 = (undefined2)DAT_004c44d0;
    switch(uVar3) {
    case 0:
    case 1:
    case 2:
      break;
    case 3:
      uVar4 = (undefined2)DAT_004c44d4;
      break;
    case 4:
      uVar4 = (undefined2)DAT_004c44d8;
      break;
    default:
      uVar4 = 0;
    }
    uVar3 = 1;
    *(undefined2 *)((int)param_2 + 0xe) = uVar4;
  }
  return uVar3;
}
