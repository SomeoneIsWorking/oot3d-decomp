// OoT3D decomp @ 0044fab8  name=FUN_0044fab8  size=280

void FUN_0044fab8(undefined4 param_1,int param_2)

{
  uint uVar1;
  short *psVar2;
  uint uVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  bool bVar8;
  
  uVar1 = DAT_0044fbd0;
  psVar2 = (short *)(param_2 + -0x10);
  if (param_2 != 0 && psVar2 != (short *)0x0) {
    uVar3 = (uint)*psVar2;
    bVar8 = uVar3 == DAT_0044fbd0;
    if (bVar8) {
      uVar3 = (uint)*(ushort *)(param_2 + -0xe);
    }
    if (bVar8 && uVar3 == 0) {
      psVar4 = *(short **)(param_2 + -8);
      if ((psVar4 == (short *)0x0) || ((int)*psVar4 != DAT_0044fbd0)) {
        psVar4 = (short *)0x0;
      }
      psVar5 = *(short **)(param_2 + -4);
      if ((psVar5 == (short *)0x0) || ((int)*psVar5 != DAT_0044fbd0)) {
        psVar5 = (short *)0x0;
      }
      *(undefined2 *)(param_2 + -0xe) = 1;
      psVar6 = (short *)(*(int *)(param_2 + -0xc) + param_2);
      psVar7 = psVar4;
      if ((psVar6 == psVar4) &&
         (psVar6 = (short *)(uint)(ushort)psVar4[1],
         (short *)(uint)(ushort)psVar4[1] != (short *)0x0)) {
        psVar7 = *(short **)(psVar4 + 4);
        if ((psVar7 == (short *)0x0) || ((int)*psVar7 != uVar1)) {
          psVar7 = (short *)0x0;
        }
        if (psVar7 != (short *)0x0) {
          *(short **)(psVar7 + 6) = psVar2;
        }
        *(int *)(param_2 + -0xc) = *(int *)(psVar4 + 2) + *(int *)(param_2 + -0xc) + 0x10;
        *(short **)(param_2 + -8) = psVar7;
        psVar6 = psVar7;
      }
      if (psVar5 != (short *)0x0) {
        psVar6 = (short *)(uint)(ushort)psVar5[1];
      }
      if ((psVar5 != (short *)0x0 && psVar6 != (short *)0x0) &&
         ((short *)((int)psVar5 + *(int *)(psVar5 + 2) + 0x10) == psVar2)) {
        if (psVar7 != (short *)0x0) {
          *(short **)(psVar7 + 6) = psVar5;
        }
        *(short **)(psVar5 + 4) = psVar7;
        *(int *)(psVar5 + 2) = *(int *)(param_2 + -0xc) + *(int *)(psVar5 + 2) + 0x10;
      }
    }
  }
  return;
}

