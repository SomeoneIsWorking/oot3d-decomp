// OoT3D decomp @ 003c4f8c  name=FUN_003c4f8c  size=328

void FUN_003c4f8c(int param_1)

{
  char cVar1;
  float fVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 uVar5;
  float fVar6;
  short local_18 [2];

  uVar5 = FUN_002cfca0((int)(short)(int)(*(float *)(param_1 + 0x1e0) *
                                        (DAT_003c50d4 / *(float *)(param_1 + 0x1ec))));
  *(undefined4 *)(param_1 + 0x6c) = uVar5;
  fVar6 = (float)FUN_0035c628(param_1,*(undefined4 *)(param_1 + 0xc40),
                              (int)*(char *)(param_1 + 0xc48),local_18);
  FUN_00375a18(param_1 + 0x36,(int)local_18[0],6,4000,1);
  fVar2 = DAT_003c50d8;
  if ((DAT_003c50d8 < fVar6) && ((int)fVar6 < DAT_003c50dc)) {
    pbVar3 = *(byte **)(param_1 + 0xc40);
    if (pbVar3 != (byte *)0x0) {
      uVar4 = *pbVar3 - 1 & 0xff;
      if (*(char *)(param_1 + 0xc46) == '\0') {
        cVar1 = *(char *)(param_1 + 0xc48) + '\x01';
        *(char *)(param_1 + 0xc48) = cVar1;
        if ((int)uVar4 <= (int)cVar1) {
          *(undefined1 *)(param_1 + 0xc48) = 0;
        }
      }
      else {
        cVar1 = *(char *)(param_1 + 0xc48) + -1;
        if (cVar1 < '\0') {
          uVar4 = uVar4 - 1;
        }
        *(char *)(param_1 + 0xc48) = cVar1;
        if (cVar1 < '\0') {
          *(char *)(param_1 + 0xc48) = (char)uVar4;
        }
      }
    }
    if ((pbVar3 != (byte *)0x0) && (*(char *)(param_1 + 0xc48) == '\0')) {
      FUN_003717ac(param_1 + 0x1a4,DAT_003c50e0,1);
      *(float *)(param_1 + 0x1e4) = fVar2;
      *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_1 + 0x1ec);
      *(float *)(param_1 + 0x6c) = fVar2;
      *(undefined1 *)(param_1 + 0xc49) = 1;
      *(undefined4 *)(param_1 + 0xbbc) = DAT_003c50e4;
    }
  }
  return;
}
