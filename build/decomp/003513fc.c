// OoT3D decomp @ 003513fc  name=FUN_003513fc  size=52

int FUN_003513fc(void)

{
  int iVar1;
  
  iVar1 = (int)(*(uint *)(DAT_00351430 + 0xb8) & *(uint *)(DAT_00351434 + 8)) >>
          *(sbyte *)(DAT_00351438 + 2);
  if (*(int *)(DAT_00351430 + 4) != 0 && iVar1 != 0) {
    iVar1 = 1;
  }
  return iVar1;
}

