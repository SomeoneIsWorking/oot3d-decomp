// OoT3D decomp @ 00434f50  name=FUN_00434f50  size=280

void FUN_00434f50(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  byte *pbVar7;
  int *piVar8;
  int iVar9;
  int iVar10;

  FUN_00343280(DAT_0043506c,DAT_00435068);
  iVar2 = DAT_00435074;
  iVar1 = DAT_00435070;
  *(undefined4 *)(DAT_00435070 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar2 + 0x558) = 0xff;
  *(undefined1 *)(iVar2 + 0x56e) = 0xff;
  *(undefined4 *)(iVar2 + 0x554) = 0;
  *(undefined2 *)(iVar2 + 0x5a0) = 0xffef;
  *(undefined1 *)(iVar2 + 0x5a2) = 0;
  *(undefined1 *)(iVar2 + 0x5a3) = 0;
  *(undefined2 *)(iVar2 + 0x5a4) = 0xffff;
  *(undefined2 *)(iVar2 + 0x5a8) = 0;
  *(undefined1 *)(iVar2 + 0x5aa) = 1;
  *(undefined1 *)(iVar2 + 0x5ab) = 0xff;
  *(undefined2 *)(iVar2 + 0x57e) = 0x32;
  puVar5 = (undefined4 *)(iVar2 + 0x450);
  *(undefined4 *)(iVar2 + 0x4dc) = 0xff;
  iVar3 = DAT_0043507c;
  iVar1 = DAT_00435078;
  piVar8 = (int *)(iVar2 + 0x474);
  *piVar8 = DAT_00435078;
  *puVar5 = 0;
  iVar6 = 1;
  iVar10 = 4;
  do {
    iVar10 = iVar10 + -1;
    iVar9 = iVar6 * DAT_00435080;
    iVar6 = iVar6 + 2;
    piVar8[1] = iVar1 + iVar9 * 8;
    puVar5[1] = 0;
    piVar8 = piVar8 + 2;
    *piVar8 = iVar3 + iVar9 * 8;
    puVar5 = puVar5 + 2;
    *puVar5 = 0;
    pcVar4 = DAT_00435084;
    iVar9 = DAT_0043506c;
  } while (iVar10 != 0);
  *(undefined4 *)(iVar2 + 0x5b4) = 0;
  *(undefined4 *)(iVar2 + 0x5b8) = 0;
  *(undefined1 *)(iVar2 + 0x5bc) = 0;
  *(undefined1 *)(iVar9 + 0x2d) = 1;
  if (*pcVar4 == '\x01') {
    *(undefined1 *)(iVar2 + 0x59a) = 0;
  }
  else if (*pcVar4 == '\x02') {
    *(undefined1 *)(iVar2 + 0x59a) = 1;
  }
  pbVar7 = DAT_00435088;
  if (DAT_00435088[0x1f] == 0xef) {
    pbVar7 = (byte *)(uint)*DAT_00435088;
  }
  *(bool *)(iVar9 + 0xe) = DAT_00435088[0x1f] == 0xef && pbVar7 == (byte *)0xbe;
  FUN_002eafb4();
  return;
}
