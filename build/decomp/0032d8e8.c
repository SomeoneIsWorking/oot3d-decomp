// OoT3D decomp @ 0032d8e8  name=FUN_0032d8e8  size=408

undefined4
FUN_0032d8e8(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5,
            undefined1 param_6,undefined2 param_7)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;

  pcVar4 = DAT_0032da84;
  uVar6 = 0;
  if (*DAT_0032da84 == '\0') {
    return 1;
  }
  fVar7 = (float)FUN_00357eac(*(undefined4 *)(DAT_0032da80 + param_2),param_1,param_3,param_4,
                              param_1,param_2,param_3);
  puVar5 = DAT_0032da94;
  fVar8 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1c) >> 8,
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar8 = DAT_0032da88 + fVar8 * DAT_0032da88;
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar7 < fVar8) << 0x1f | (uint)(fVar7 == fVar8) << 0x1e;
  bVar3 = (byte)(uVar1 >> 0x18);
  if (!(bool)(bVar3 >> 6 & 1) && (bool)(bVar3 >> 7) == (NAN(fVar7) || NAN(fVar8))) {
    cVar2 = *(char *)(param_2 + 0x31b0);
    if (((cVar2 == '\0') && (*DAT_0032da8c != '\0')) &&
       ((*(char *)(DAT_0032da90 + param_2) == '\x01' ||
        (*(char *)(param_2 + 0x31b1) != *(char *)(param_2 + 0x31b2))))) {
      if (*DAT_0032da9c != 0) {
        fVar7 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0032daa4 + 0x110),
                                           (byte)(uVar1 >> 0x15) & 3);
        *(short *)(DAT_0032daa0 + 0xc) =
             *(short *)(DAT_0032daa0 + 0xc) +
             (short)(int)(DAT_0032dab0 + fVar7 * DAT_0032daa8 * DAT_0032daac);
      }
    }
    else {
      *DAT_0032da94 = 1;
      if ((*(char *)(param_2 + 0x325d) == '\0') &&
         ((cVar2 != '\0' ||
          ((*(char *)(param_2 + 0x31b1) != '\x01' && (*(char *)(param_2 + 0x31b3) == '\0')))))) {
        *puVar5 = 0;
        *pcVar4 = '\0';
        *(undefined1 *)(param_2 + 0x31aa) = 1;
        *(char *)(param_2 + 0x31a8) = (char)param_3;
        uVar6 = 1;
        *(char *)(param_2 + 0x31a9) = (char)param_4;
        *(undefined2 *)(param_2 + 0x31ac) = param_7;
        *(undefined1 *)(param_2 + 0x31b3) = 1;
        *(undefined1 *)(param_2 + 0x31b1) = param_5;
        *(undefined1 *)(param_2 + 0x31b2) = param_6;
        *DAT_0032da98 = param_6;
        *(undefined2 *)(param_2 + 0x31b6) = param_7;
        *(undefined2 *)(param_2 + 0x31b4) = param_7;
      }
    }
  }
  return uVar6;
}
