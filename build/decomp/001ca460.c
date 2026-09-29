// OoT3D decomp @ 001ca460  name=FUN_001ca460  size=176

void FUN_001ca460(int param_1,int param_2)

{
  short *psVar1;
  bool bVar2;
  float fVar3;

  fVar3 = *(float *)(param_1 + 0x1e0);
  psVar1 = *(short **)(DAT_001ca510 + param_2);
  FUN_003731e0(param_1 + 0x1a4);
  bVar2 = fVar3 == DAT_001ca514;
  if ((int)DAT_001ca514 <= (int)fVar3) {
    bVar2 = *(char *)(param_1 + 0x954) == '\0';
  }
  if (bVar2) {
    FUN_00375bcc(param_1,DAT_001ca518);
    *(undefined1 *)(param_1 + 0x954) = 1;
  }
  if (*(float *)(param_1 + 0x938) <= fVar3) {
    for (; psVar1 != (short *)0x0; psVar1 = *(short **)(psVar1 + 0x98)) {
      if (*psVar1 == 0xf8) {
        *(short **)(param_1 + 0x960) = psVar1;
        psVar1[0xe0] = 1;
        psVar1[0xe1] = 0;
        psVar1[0xe2] = 0;
        psVar1[0xe3] = 0;
        break;
      }
    }
    *(undefined4 *)(param_1 + 0x8a8) = DAT_001ca51c;
  }
  return;
}
