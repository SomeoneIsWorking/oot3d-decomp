// OoT3D decomp @ 00438500  name=FUN_00438500  size=32

void FUN_00438500(void)

{
  undefined2 *puVar1;
  int iVar2;

  iVar2 = 8;
  puVar1 = DAT_00438520;
  do {
    iVar2 = iVar2 + -1;
    puVar1[1] = 0xffff;
    puVar1 = puVar1 + 2;
    *puVar1 = 0xffff;
  } while (iVar2 != 0);
  return;
}
