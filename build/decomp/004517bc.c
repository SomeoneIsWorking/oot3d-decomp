// OoT3D decomp @ 004517bc  name=FUN_004517bc  size=300

void FUN_004517bc(int param_1)

{
  int iVar1;

  iVar1 = 0;
  *(undefined1 *)(param_1 + 0x2e4d) = 0;
  *(undefined1 *)(param_1 + 0x2e4c) = 0;
  *(undefined1 *)(param_1 + 0x2e4b) = 0;
  *(undefined1 *)(param_1 + 0x2e4a) = 0;
  *(undefined1 *)(param_1 + 0x2e49) = 0;
  *(undefined1 *)(param_1 + 0x2e48) = 0;
  *(undefined1 *)(param_1 + 0x2e47) = 0;
  *(undefined1 *)(param_1 + 0x2e46) = 0;
  *(undefined1 *)(param_1 + 0x2e45) = 0;
  *(undefined1 *)(param_1 + 0x2e44) = 0;
  *(undefined1 *)(param_1 + 0x2e43) = 0;
  *(undefined1 *)(param_1 + 0x2e42) = 0;
  do {
    if ((ushort)*(byte *)(DAT_004518e8 + iVar1 * 4) == (*(ushort *)(param_1 + 0x104) & 0xff)) {
      iVar1 = DAT_004518e8 + iVar1 * 4;
      *(byte *)(param_1 + 0x2e42) = *(byte *)(iVar1 + 1) >> 6;
      *(char *)(param_1 + 0x2e43) = (char)((*(byte *)(iVar1 + 1) & 0x30) >> 4);
      *(char *)(param_1 + 0x2e44) = (char)((*(byte *)(iVar1 + 1) & 0xc) >> 2);
      *(byte *)(param_1 + 0x2e45) = *(byte *)(iVar1 + 1) & 3;
      *(byte *)(param_1 + 0x2e46) = *(byte *)(iVar1 + 2) >> 6;
      *(char *)(param_1 + 0x2e47) = (char)((*(byte *)(iVar1 + 2) & 0x30) >> 4);
      *(char *)(param_1 + 0x2e48) = (char)((*(byte *)(iVar1 + 2) & 0xc) >> 2);
      *(byte *)(param_1 + 0x2e49) = *(byte *)(iVar1 + 2) & 3;
      *(byte *)(param_1 + 0x2e4a) = *(byte *)(iVar1 + 3) >> 6;
      *(char *)(param_1 + 0x2e4b) = (char)((*(byte *)(iVar1 + 3) & 0x30) >> 4);
      *(char *)(param_1 + 0x2e4c) = (char)((*(byte *)(iVar1 + 3) & 0xc) >> 2);
      *(byte *)(param_1 + 0x2e4d) = *(byte *)(iVar1 + 3) & 3;
      return;
    }
    iVar1 = (int)(short)((short)iVar1 + 1);
  } while (*(char *)(DAT_004518e8 + iVar1 * 4) != -1);
  return;
}
