// OoT3D decomp @ 0041c3c8  name=FUN_0041c3c8  size=248

void FUN_0041c3c8(int param_1)

{
  short sVar1;
  int iVar2;
  bool bVar3;
  uint in_fpscr;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  float local_8;

  if (*(char *)(param_1 + 0xc) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0xd) == '\0') goto LAB_0041c438;
  bVar3 = false;
  if (*(char *)(param_1 + 0xd) == '\x01') {
    sVar1 = *(short *)(param_1 + 0xe) + 8;
    *(short *)(param_1 + 0xe) = sVar1;
    if (0xff < sVar1) {
      *(undefined2 *)(param_1 + 0xe) = 0xff;
LAB_0041c42c:
      bVar3 = true;
    }
  }
  else {
    sVar1 = *(short *)(param_1 + 0xe) + -8;
    *(short *)(param_1 + 0xe) = sVar1;
    if (sVar1 < 0) {
      *(undefined2 *)(param_1 + 0xe) = 0;
      goto LAB_0041c42c;
    }
  }
  if (bVar3) {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
LAB_0041c438:
  local_c = DAT_0041c4c0;
  local_10 = DAT_0041c4c0;
  local_14 = DAT_0041c4c0;
  local_8 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xe),(byte)(in_fpscr >> 0x15) & 3);
  local_8 = local_8 * DAT_0041c4c4;
  if (((*DAT_0041c4c8 & 1) == 0) && (iVar2 = FUN_003679b4(DAT_0041c4c8), iVar2 != 0)) {
    FUN_0036788c(DAT_0041c4cc);
  }
  FUN_003339e8(DAT_0041c4d8,6,&local_14,10);
  return;
}
