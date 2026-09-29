// OoT3D decomp @ 004a59c8  name=FUN_004a59c8  size=200

undefined4 FUN_004a59c8(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_34;

  local_34 = *(int *)(param_1 + 0x38);
  iVar1 = (int)((ulonglong)
                ((longlong)DAT_004a5a90 * (longlong)(local_34 - *(int *)(param_1 + 0x3c))) >> 0x20);
  uVar2 = (iVar1 >> 1) - (iVar1 >> 0x1f);
  if ((int)uVar2 < 0) {
    uVar3 = -(0x1f - uVar2 >> 5);
  }
  else {
    uVar3 = uVar2 >> 5;
  }
  if (uVar3 != 0) {
    local_34 = *(int *)(*(int *)(param_1 + 0x44) + uVar3 * 4) + (uVar2 + uVar3 * -0x20) * 0xc;
  }
  return *(undefined4 *)(local_34 + 4);
}
