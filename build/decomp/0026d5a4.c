// OoT3D decomp @ 0026d5a4  name=FUN_0026d5a4  size=80

void FUN_0026d5a4(int param_1,int param_2)

{
  char cVar1;
  bool bVar2;

  FUN_0034fbe8(param_2,param_2 + 0xa70,*(undefined4 *)(param_1 + 0xa54));
  cVar1 = *(char *)(param_1 + 0x9e0);
  bVar2 = cVar1 == '\0';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0x9e1);
  }
  if (bVar2 && cVar1 == '\0') {
    FUN_00373d0c(param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00350be0(param_1 + 0x1a4,param_1 + 0xa70);
}
