// OoT3D decomp @ 00111f68  name=FUN_00111f68  size=60

void FUN_00111f68(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;

  iVar1 = FUN_00369a48();
  if (iVar1 != 0) {
    uVar2 = DAT_00111fa4;
    if (*(short *)(param_1 + 0x1c) == 0) {
      uVar2 = DAT_00111fa8;
    }
    *(undefined4 *)(param_1 + 0x29c) = uVar2;
  }
  FUN_00369960(param_1,param_2);
  return;
}
