// OoT3D decomp @ 00301954  name=FUN_00301954  size=192

void FUN_00301954(uint *param_1,int *param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  short *psVar3;
  uint uVar4;

  puVar1 = DAT_00301968;
  FUN_002ff560();
  *param_1 = 0;
  *param_2 = 0;
  *param_3 = 0;
  iVar2 = DAT_0041a678;
  psVar3 = (short *)*puVar1;
  while (psVar3 != (short *)0x0) {
    if (psVar3[1] == 0) {
      *param_3 = *param_3 + *(int *)(psVar3 + 2);
    }
    else {
      *param_2 = *param_2 + *(int *)(psVar3 + 2);
      uVar4 = *param_1;
      if (*param_1 <= *(uint *)(psVar3 + 2)) {
        uVar4 = *(uint *)(psVar3 + 2);
      }
      *param_1 = uVar4;
    }
    psVar3 = *(short **)(psVar3 + 4);
    if ((psVar3 == (short *)0x0) || (*psVar3 != iVar2)) {
      psVar3 = (short *)0x0;
    }
  }
  FUN_002ff508(puVar1);
  return;
}
