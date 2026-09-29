// OoT3D decomp @ 0030e1e4  name=FUN_0030e1e4  size=140

undefined4 * FUN_0030e1e4(void)

{
  undefined4 *puVar1;
  int iVar2;

  if (((*DAT_0030e270 & 1) == 0) &&
     (iVar2 = FUN_003679b4(DAT_0030e270), puVar1 = DAT_0030e274, iVar2 != 0)) {
    *DAT_0030e274 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    *(undefined1 *)(puVar1 + 5) = 1;
    puVar1[6] = 0;
    *(undefined1 *)(puVar1 + 7) = 1;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0xffffffff;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    *(undefined1 *)((int)puVar1 + 0xe) = 0;
    *(undefined1 *)(puVar1 + 2) = 0;
    *(undefined1 *)(puVar1 + 0xc) = 0;
  }
  return DAT_0030e274;
}
