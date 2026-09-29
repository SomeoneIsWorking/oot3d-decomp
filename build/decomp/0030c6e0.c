// OoT3D decomp @ 0030c6e0  name=FUN_0030c6e0  size=104

undefined1 * FUN_0030c6e0(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;

  if (((*DAT_0030c748 & 1) == 0) &&
     (iVar2 = FUN_003679b4(DAT_0030c748), puVar1 = DAT_0030c74c, iVar2 != 0)) {
    puVar3 = DAT_0030c74c + 8;
    *DAT_0030c74c = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    *(undefined1 **)(puVar1 + 8) = puVar3;
    *(undefined1 **)(puVar1 + 0xc) = puVar3;
    *(undefined4 *)(puVar1 + 0x10) = 0;
    *(undefined1 **)(puVar1 + 0x14) = puVar1 + 0x14;
    *(undefined1 **)(puVar1 + 0x18) = puVar1 + 0x14;
  }
  return DAT_0030c74c;
}
