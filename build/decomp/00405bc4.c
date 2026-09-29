// OoT3D decomp @ 00405bc4  name=FUN_00405bc4  size=84

void FUN_00405bc4(int param_1,uint param_2)

{
  int iVar1;

  for (iVar1 = *(int *)(param_1 + 0xc4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x138)) {
    if ((*(char *)(iVar1 + 0xc6) != '\0') && ((*(char *)(iVar1 + 0xc5) != '\0') != param_2)) {
      *(char *)(iVar1 + 0xc5) = (char)param_2;
      FUN_0030a3d8(*(undefined4 *)(iVar1 + 0x134),param_2);
    }
  }
  return;
}
