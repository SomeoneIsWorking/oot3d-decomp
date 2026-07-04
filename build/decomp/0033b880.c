// OoT3D decomp @ 0033b880  name=FUN_0033b880  size=416

undefined4
FUN_0033b880(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5,
            undefined1 param_6,undefined2 param_7,uint param_8)

{
  uint uVar1;
  char cVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  
  pbVar3 = UNK_0033ba24;
  uVar5 = 0;
  if (*UNK_0033ba24 == param_8) {
    return 1;
  }
  fVar6 = (float)FUN_00357eac(*(undefined4 *)(UNK_0033ba20 + param_2),param_1,param_3,param_4,
                              param_1,param_2);
  puVar4 = UNK_0033ba34;
  fVar7 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1c) >> 8,
                                     (byte)(in_fpscr >> 0x15) & 3);
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar7 * UNK_0033ba28 <= fVar6) << 0x1d;
  if (!SUB41(uVar1 >> 0x1d,0)) {
    cVar2 = *(char *)(param_2 + 0x31b0);
    if (((cVar2 == '\0') && (*UNK_0033ba2c != '\0')) &&
       ((*(char *)(UNK_0033ba30 + param_2) == '\x01' ||
        (*(char *)(param_2 + 0x31b1) != *(char *)(param_2 + 0x31b2))))) {
      if (*UNK_0033ba3c != 0) {
        fVar6 = (float)VectorSignedToFloat((int)*(short *)(*UNK_0033ba44 + 0x110),
                                           (byte)(uVar1 >> 0x15) & 3);
        *(short *)(UNK_0033ba40 + 0xc) =
             *(short *)(UNK_0033ba40 + 0xc) +
             (short)(int)(UNK_0033ba50 + fVar6 * UNK_0033ba48 * UNK_0033ba4c);
      }
    }
    else {
      *UNK_0033ba34 = 1;
      if ((*(char *)(param_2 + 0x325d) == '\0') &&
         ((cVar2 != '\0' ||
          ((*(char *)(param_2 + 0x31b1) != '\x01' && (*(char *)(param_2 + 0x31b3) == '\0')))))) {
        *puVar4 = 0;
        if (*pbVar3 != param_8) {
          *pbVar3 = (byte)param_8;
          *(undefined1 *)(param_2 + 0x31aa) = 1;
          *(char *)(param_2 + 0x31a8) = (char)param_3;
          *(char *)(param_2 + 0x31a9) = (char)param_4;
          *(undefined2 *)(param_2 + 0x31ac) = param_7;
          *(undefined1 *)(param_2 + 0x31b3) = 1;
          *(undefined1 *)(param_2 + 0x31b1) = param_5;
          *(undefined1 *)(param_2 + 0x31b2) = param_6;
          *UNK_0033ba38 = param_6;
          *(undefined2 *)(param_2 + 0x31b6) = param_7;
          *(undefined2 *)(param_2 + 0x31b4) = param_7;
        }
        uVar5 = 1;
      }
    }
  }
  return uVar5;
}

