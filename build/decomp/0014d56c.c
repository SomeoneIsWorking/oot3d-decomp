// OoT3D decomp @ 0014d56c  name=FUN_0014d56c  size=84

void FUN_0014d56c(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;

  iVar3 = FUN_00357378(param_2);
  uVar2 = DAT_0014d5c4;
  puVar1 = DAT_0014d5c0;
  if (iVar3 != 0xc) {
    iVar3 = FUN_002386c4(param_2);
    if (iVar3 != 0) {
      *puVar1 = 1;
      *(undefined4 *)(param_1 + 0xc04) = uVar2;
    }
    return;
  }
  FUN_00370778();
  *puVar1 = 1;
  *(undefined4 *)(param_1 + 0xc04) = uVar2;
  return;
}
