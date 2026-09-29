// OoT3D decomp @ 004476b8  name=FUN_004476b8  size=136

int * FUN_004476b8(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;

  FUN_002e5d60(DAT_00447740);
  piVar1 = DAT_00447744;
  piVar2 = (int *)DAT_00447744[5];
  do {
    if (piVar2 == DAT_00447744) {
      piVar4 = (int *)0x0;
LAB_00447730:
      FUN_002e5cfc(DAT_00447740);
      return piVar4;
    }
    if (*piVar2 == param_1) {
      piVar4 = piVar2 + 0xc;
      *(short *)(piVar2 + 1) = (short)piVar2[1] + 1;
      *(int *)(piVar2[4] + 0x14) = piVar2[5];
      *(int *)(piVar2[5] + 0x10) = piVar2[4];
      iVar3 = piVar1[4];
      *(int **)(iVar3 + 0x14) = piVar2;
      piVar2[5] = (int)piVar1;
      piVar2[4] = iVar3;
      piVar1[4] = (int)piVar2;
      goto LAB_00447730;
    }
    piVar2 = (int *)piVar2[5];
  } while( true );
}
