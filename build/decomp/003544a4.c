// OoT3D decomp @ 003544a4  name=FUN_003544a4  size=196

undefined4 FUN_003544a4(short *param_1,int param_2,float *param_3)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  bool bVar4;
  float fVar5;
  float fVar6;

  psVar2 = *(short **)(&DAT_000020cc + param_2);
  if (psVar2 != (short *)0x0) {
    iVar3 = DAT_0035456c + 0xd00000;
    do {
      if ((psVar2 != param_1) && (*psVar2 == DAT_00354568)) {
        fVar5 = *(float *)(psVar2 + 0x16) - param_3[1];
        fVar6 = ABS(*(float *)(psVar2 + 0x14) - *param_3);
        bVar4 = SBORROW4((int)fVar6,iVar3);
        iVar1 = (int)fVar6 - iVar3;
        if ((int)fVar6 < iVar3) {
          bVar4 = SBORROW4((int)fVar5,DAT_0035456c);
          iVar1 = (int)fVar5 - DAT_0035456c;
        }
        if (((iVar1 < 0 != bVar4) && ((uint)fVar5 < (DAT_0035456c | DAT_00354568 << 0x1d))) &&
           ((int)ABS(*(float *)(psVar2 + 0x18) - param_3[2]) < iVar3)) {
          *(undefined1 *)(psVar2 + 0xe1) = 1;
          *(undefined1 *)(psVar2 + 0xe2) = 0xf;
          return 1;
        }
      }
      psVar2 = *(short **)(psVar2 + 0x98);
    } while (psVar2 != (short *)0x0);
  }
  return 0;
}
