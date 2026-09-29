// OoT3D decomp @ 003a53d4  name=FUN_003a53d4  size=64

void FUN_003a53d4(undefined4 param_1,int param_2)

{
  int iVar1;

  iVar1 = FUN_0037571c(param_2);
  if (iVar1 == 0) {
    FUN_00374428(param_1);
    *(uint *)(*(int *)(DAT_003a5414 + param_2) + 0x29b8) =
         *(uint *)(*(int *)(DAT_003a5414 + param_2) + 0x29b8) & 0xfffffbff;
  }
  return;
}
