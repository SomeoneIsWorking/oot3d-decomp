// OoT3D decomp @ 00477d10  name=FUN_00477d10  size=252

short * FUN_00477d10(short **param_1,int param_2)

{
  int iVar1;
  short *psVar2;
  undefined2 *puVar3;
  short *psVar4;
  uint uVar5;
  uint uVar6;
  
  iVar1 = DAT_00477e0c;
  uVar5 = param_2 + 0xfU & 0xfffffff0;
  uVar6 = uVar5 + 0x10;
  psVar4 = *param_1;
  psVar2 = (short *)0x0;
  if (psVar4 != (short *)0x0) {
    while ((psVar4[1] == 0 || (*(uint *)(psVar4 + 2) < uVar5))) {
      psVar4 = *(short **)(psVar4 + 4);
      if ((psVar4 == (short *)0x0) || (*psVar4 != DAT_00477e0c)) {
        psVar4 = (short *)0x0;
      }
      if (psVar4 == (short *)0x0) {
        return psVar2;
      }
    }
    if (uVar6 < *(uint *)(psVar4 + 2)) {
      psVar2 = *(short **)(psVar4 + 4);
      puVar3 = (undefined2 *)((int)psVar4 + uVar6);
      if ((psVar2 == (short *)0x0) || (*psVar2 != DAT_00477e0c)) {
        psVar2 = (short *)0x0;
      }
      *(short **)(puVar3 + 6) = psVar4;
      *(short **)(puVar3 + 4) = psVar2;
      *(uint *)(puVar3 + 2) = *(int *)(psVar4 + 2) - uVar6;
      puVar3[1] = 1;
      *puVar3 = (short)iVar1;
      *(undefined2 **)(psVar4 + 4) = puVar3;
      *(uint *)(psVar4 + 2) = uVar5;
      psVar2 = *(short **)(puVar3 + 4);
      if ((psVar2 == (short *)0x0) || (*psVar2 != iVar1)) {
        psVar2 = (short *)0x0;
      }
      if (psVar2 != (short *)0x0) {
        *(undefined2 **)(psVar2 + 6) = puVar3;
      }
    }
    psVar4[1] = 0;
    psVar2 = psVar4 + 8;
  }
  return psVar2;
}

