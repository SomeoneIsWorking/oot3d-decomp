// OoT3D decomp @ 0016e7f8  name=FUN_0016e7f8  size=328

void FUN_0016e7f8(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;

  iVar5 = *(int *)(param_2 + 0x20ac);
  iVar2 = FUN_0037571c(param_2);
  if (iVar2 == 3) {
    iVar2 = FUN_0034cc28(DAT_0016e944,param_1,DAT_0016e940);
    if (iVar2 != 0) {
      *(undefined4 *)(iVar5 + 0x28) = DAT_0016e948;
      *(undefined4 *)(iVar5 + 0x2c) = DAT_0016e94c;
      *(undefined4 *)(iVar5 + 0x30) = DAT_0016e950;
    }
    uVar4 = DAT_0016e954;
    *(undefined2 *)(param_2 + 0x22b8) = 0;
    uVar1 = (undefined2)uVar4;
    *(undefined2 *)(param_2 + 0x22c0) = uVar1;
    *(undefined2 *)(param_2 + 0x22c2) = uVar1;
    *(undefined2 *)(param_2 + 0x22c4) = uVar1;
    *(undefined2 *)(param_2 + 0x22c6) = uVar1;
    *(undefined1 *)(param_2 + 0x22cc) = 0;
    *(undefined1 *)(param_2 + 0x22cd) = 0;
    FUN_00367bfc(param_2,2);
    iVar2 = FUN_00369f3c(param_2);
    uVar3 = (uint)*(byte *)(param_1 + 0x1e);
    if (iVar2 == 0) {
      if ((uVar3 < 0x13) && (iVar2 = param_2 + uVar3 * 0x80, *(int *)(DAT_0016e958 + iVar2) != 0)) {
        iVar2 = iVar2 + 0x3a5c;
      }
      else {
        iVar2 = 0;
      }
      uVar4 = FUN_00375750(iVar2 + 0x10,2);
      FUN_0037573c(param_2,uVar4);
      FUN_0034cbf8(5);
      uVar4 = DAT_0016e95c;
    }
    else {
      if ((uVar3 < 0x13) && (iVar2 = param_2 + uVar3 * 0x80, *(int *)(DAT_0016e958 + iVar2) != 0)) {
        iVar2 = iVar2 + 0x3a5c;
      }
      else {
        iVar2 = 0;
      }
      uVar4 = FUN_00375750(iVar2 + 0x10,3);
      FUN_0037573c(param_2,uVar4);
      uVar4 = DAT_0016e960;
      *(undefined2 *)(param_2 + 0x22b8) = 0;
    }
    *(undefined4 *)(param_1 + 0x1bc) = uVar4;
  }
  return;
}
