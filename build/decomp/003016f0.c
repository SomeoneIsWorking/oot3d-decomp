// OoT3D decomp @ 003016f0  name=FUN_003016f0  size=280

void FUN_003016f0(undefined4 *param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  short *psVar5;
  undefined4 uVar6;
  short *psVar7;
  undefined2 *puVar8;

  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((int)param_1 + 0xd) = 0;
  *(undefined1 *)((int)param_1 + 0xe) = 0;
  puVar3 = (undefined4 *)FUN_00313ce0(0xc);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0;
    puVar3[2] = 0xffffffff;
    puVar3[1] = 0;
  }
  param_1[2] = puVar3;
  do {
    uVar6 = *puVar3;
    bVar1 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar1);
  *puVar3 = 1;
  puVar3[1] = 0;
  puVar3[2] = 0;
  if (param_2 != 0) {
    puVar8 = (undefined2 *)(param_2 + 0xfU & 0xfffffff0);
    uVar4 = param_3 - ((int)puVar8 - param_2) & 0xfffffff0;
    if (0x10 < (int)uVar4) {
      *(undefined4 *)(puVar8 + 4) = 0;
      *(uint *)(puVar8 + 2) = uVar4 - 0x10;
      *(undefined4 *)(puVar8 + 6) = 0;
      iVar2 = DAT_00301808;
      puVar8[1] = 1;
      *puVar8 = (short)iVar2;
      psVar5 = (short *)FUN_002ff560(param_1,uVar6);
      if (param_1 != (undefined4 *)0x0) {
        psVar5 = (short *)*param_1;
      }
      psVar7 = (short *)0x0;
      if ((param_1 != (undefined4 *)0x0 && psVar5 != (short *)0x0) && (*psVar5 == iVar2)) {
        do {
          psVar7 = psVar5;
          psVar5 = *(short **)(psVar7 + 4);
          if ((psVar5 == (short *)0x0) || (*psVar5 != iVar2)) {
            psVar5 = (short *)0x0;
          }
        } while (psVar5 != (short *)0x0);
      }
      if (psVar7 == (short *)0x0) {
        *param_1 = puVar8;
        param_1[1] = param_2;
      }
      else {
        *(short **)(puVar8 + 6) = psVar7;
        *(undefined2 **)(psVar7 + 4) = puVar8;
      }
      FUN_002ff508(param_1);
    }
  }
  *(undefined1 *)((int)param_1 + 0xd) = 1;
  return;
}
