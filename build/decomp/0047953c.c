// OoT3D decomp @ 0047953c  name=FUN_0047953c  size=328

void FUN_0047953c(undefined4 param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;

  iVar4 = FUN_003695f8();
  if ((iVar4 == 0) &&
     ((cVar1 = *(char *)(param_2 + 0x11), cVar1 == '\0' ||
      (*(char *)(param_2 + 0x11) = cVar1 + -1, cVar1 == '\x01')))) {
    fVar3 = DAT_00479688;
    piVar2 = DAT_00479684;
    cVar1 = *(char *)(param_2 + 0x10);
    if ((cVar1 != '\0') && (*(char *)(param_2 + 0x10) = cVar1 + -1, cVar1 != '\x01')) {
      fVar5 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),
                                         (byte)(in_fpscr >> 0x15) & 3);
      FUN_00372aa8(param_2 + 0x12,0xff,(int)(short)(int)(fVar3 + fVar5 * DAT_00479694));
      fVar5 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),
                                         (byte)(in_fpscr >> 0x15) & 3);
      FUN_00372aa8(param_2 + 0x14,0xff,(int)(short)(int)(fVar3 + fVar5 * DAT_00479698));
      return;
    }
    fVar5 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),(byte)(in_fpscr >> 0x15) & 3
                                      );
    FUN_00372aa8(param_2 + 0x12,0,(int)(short)(int)(fVar3 + fVar5 * DAT_0047968c));
    fVar5 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),(byte)(in_fpscr >> 0x15) & 3
                                      );
    FUN_00372aa8(param_2 + 0x14,0,(int)(short)(int)(fVar3 + fVar5 * DAT_00479690));
    return;
  }
  return;
}
