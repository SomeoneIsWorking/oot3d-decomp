// OoT3D decomp @ 001bc088  name=FUN_001bc088  size=304

void FUN_001bc088(int param_1,int param_2)

{
  char cVar1;
  short sVar2;
  char *pcVar3;

  FUN_0037632c();
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0xb1c);
  FUN_003731e0(param_1 + 0x1a4);
  FUN_00376864(param_1);
  FUN_00376340(DAT_001bc260,DAT_001bc25c,DAT_001bc258,param_2,param_1,5);
  (**(code **)(param_1 + 0xb18))(param_1,param_2);
  sVar2 = 0;
  pcVar3 = (char *)(param_1 + 0xbcc);
  do {
    if (*pcVar3 != '\0') {
      cVar1 = pcVar3[1];
      pcVar3[1] = cVar1 + -1;
      if ((char)(cVar1 + -1) == '\0') {
        *pcVar3 = '\0';
      }
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    sVar2 = sVar2 + 1;
    pcVar3 = pcVar3 + 0x38;
  } while (sVar2 < 0x14);
  if (((*(short *)(param_1 + 3000) == 0) ||
      (sVar2 = *(short *)(param_1 + 3000) + -1, *(short *)(param_1 + 3000) = sVar2, sVar2 == 0)) &&
     (sVar2 = *(short *)(param_1 + 0xbb6) + 1, *(short *)(param_1 + 0xbb6) = sVar2, 2 < sVar2)) {
    sVar2 = *(short *)(param_1 + 0xbac) + -1;
    *(short *)(param_1 + 0xbac) = sVar2;
    if (sVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_003702c8(0x1e);
    }
    *(undefined2 *)(param_1 + 0xbb6) = 0;
  }
  return;
}
