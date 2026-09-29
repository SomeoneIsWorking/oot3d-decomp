// OoT3D decomp @ 001958b8  name=FUN_001958b8  size=288

void FUN_001958b8(int param_1,int param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;

  fVar3 = DAT_001959e4;
  fVar2 = DAT_001959e0;
  piVar1 = DAT_001959dc;
  iVar6 = *(int *)(DAT_001959d8 + param_2);
  if (*(char *)(param_1 + 0xc4a) == '\0') {
    iVar4 = FUN_003769d8(param_2 + 0x28a0);
    if (iVar4 != 0) {
      return;
    }
    FUN_00367c7c(param_2,DAT_001959e8,0);
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),(byte)(in_fpscr >> 0x15) & 3
                                      );
    *(short *)(iVar6 + 0x118) = (short)(int)(fVar2 / fVar7 + fVar3);
    *(char *)(param_1 + 0xc4a) = *(char *)(param_1 + 0xc4a) + '\x01';
  }
  else if (*(char *)(param_1 + 0xc4a) != '\x01') {
    return;
  }
  iVar5 = FUN_003769d8(param_2 + 0x28a0);
  iVar4 = DAT_001959f0;
  if (iVar5 != 2) {
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),(byte)(in_fpscr >> 0x15) & 3
                                      );
    *(short *)(iVar6 + 0x118) = (short)(int)(fVar2 / fVar7 + fVar3);
    return;
  }
  *(ushort *)(DAT_001959ec + 0x30) = *(ushort *)(DAT_001959ec + 0x30) | 0x1000;
  *(undefined2 *)(iVar4 + param_1) = 1;
  *(undefined1 *)(param_1 + 0xc49) = 0;
  *(undefined1 *)(param_1 + 0xc47) = 0;
  *(undefined4 *)(param_1 + 0xbbc) = DAT_001959f4;
  return;
}
