// OoT3D decomp @ 003fb4cc  name=FUN_003fb4cc  size=76

void FUN_003fb4cc(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;

  piVar3 = (int *)func_0x00402c60();
  iVar2 = iRam003fb51c;
  iVar1 = iRam003fb518;
  *piVar3 = iRam003fb518;
  piVar3[0x16] = iVar1 + 0x24;
  piVar3[0x27] = 0;
  *(undefined1 *)((int)piVar3 + 0x83) = 0;
  piVar3[0x21] = 0;
  piVar3[0x22] = 0;
  piVar3[0x23] = 0;
  piVar3[0x24] = 0;
  piVar3[0x25] = iVar2;
  *(undefined1 *)(piVar3 + 0x26) = 0;
  *(undefined1 *)((int)piVar3 + 0x99) = 0;
  *(undefined1 *)((int)piVar3 + 0x9a) = 0;
  return;
}
