// OoT3D decomp @ 0016c874  name=FUN_0016c874  size=100

void FUN_0016c874(int param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;

  iVar1 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar1 == 6) && (iVar1 = FUN_00346964(param_2), iVar1 != 0)) {
    FUN_0036bc98(param_1,param_2);
    if ((*(ushort *)(DAT_0016c8d8 + 0x26) & 0x40) == 0) {
      uVar2 = (undefined2)DAT_0016c8dc;
    }
    else {
      uVar2 = (undefined2)DAT_0016c8e0;
    }
    *(undefined2 *)(param_1 + 2000) = uVar2;
    *(undefined4 *)(param_1 + 0x650) = DAT_0016c8e4;
  }
  return;
}
