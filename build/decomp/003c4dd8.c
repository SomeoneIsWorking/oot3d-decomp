// OoT3D decomp @ 003c4dd8  name=FUN_003c4dd8  size=408

void FUN_003c4dd8(int param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;

  if ((*(short *)(param_1 + 0xbc0) == 0) || (*(int *)(param_1 + 0x6c) < 0x3f800000)) {
    FUN_00373500(DAT_003c4f78,DAT_003c4f74,DAT_003c4f70,param_1 + 0x6c);
    if (0x3f7fffff < *(int *)(param_1 + 0x6c)) {
      FUN_00371b34(param_1,3);
    }
    if ((int)*(float *)(param_1 + 0x6c) == 0) {
      uVar3 = *(ushort *)(param_1 + 0x36) ^ 0x8000;
      *(ushort *)(param_1 + 0x36) = uVar3;
      *(ushort *)(param_1 + 0xbe) = uVar3;
      *(byte *)(param_1 + 0xc46) = *(byte *)(param_1 + 0xc46) ^ 1;
      if (*(char **)(param_1 + 0xc40) != (char *)0x0) {
        cVar2 = **(char **)(param_1 + 0xc40);
        if (*(char *)(param_1 + 0xc46) == '\0') {
          cVar1 = *(char *)(param_1 + 0xc48) + '\x01';
          *(char *)(param_1 + 0xc48) = cVar1;
          if ((int)cVar1 < (int)(uint)(byte)(cVar2 - 1)) goto LAB_003c4f5c;
          cVar2 = '\0';
        }
        else {
          cVar1 = *(char *)(param_1 + 0xc48) + -1;
          *(char *)(param_1 + 0xc48) = cVar1;
          if (-1 < cVar1) goto LAB_003c4f5c;
          cVar2 = cVar2 + -2;
        }
        *(char *)(param_1 + 0xc48) = cVar2;
      }
LAB_003c4f5c:
      FUN_0035c464(param_1,param_2);
      return;
    }
  }
  else {
    iVar4 = FUN_00371cf8(DAT_003c4f7c,param_1,2,0);
    if (iVar4 != 0) {
      fVar5 = (float)VectorSignedToFloat((int)*(short *)(*DAT_003c4f80 + 0x110),
                                         (byte)(in_fpscr >> 0x15) & 3);
      if (((int)(DAT_003c4f84 / fVar5 + DAT_003c4f88) < (int)*(short *)(param_1 + 0xef4)) &&
         (*(short *)(param_1 + 0xf00) == 0)) {
        fVar5 = (float)VectorSignedToFloat((int)*(short *)(*DAT_003c4f80 + 0x110),
                                           (byte)(in_fpscr >> 0x15) & 3);
        *(short *)(param_1 + 0xef4) = (short)(int)(DAT_003c4f84 / fVar5 + DAT_003c4f88);
      }
      FUN_00371b34(param_1,0);
      return;
    }
  }
  return;
}
