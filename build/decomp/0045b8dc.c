// OoT3D decomp @ 0045b8dc  name=FUN_0045b8dc  size=156

void FUN_0045b8dc(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;

  if (*(int *)(param_2 + 0x1c) != 0) {
    if (((*DAT_0045b978 & 1) == 0) && (iVar1 = FUN_003679b4(DAT_0045b978), iVar1 != 0)) {
      FUN_0036788c(DAT_0045b97c);
    }
    FUN_00348904(*(undefined4 *)(DAT_0045b988 + 0x47c),*(undefined4 *)(param_2 + 0x1c));
    *(undefined4 *)(param_2 + 0x1c) = 0;
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_003488e4();
    (**(code **)(*(int *)*DAT_0045b98c + 0x10))((int *)*DAT_0045b98c,uVar2);
    *(undefined4 *)(param_2 + 0x18) = 0;
  }
  return;
}
