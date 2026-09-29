// OoT3D decomp @ 00360084  name=FUN_00360084  size=80

void FUN_00360084(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  short *psVar2;

  psVar2 = *(short **)(param_1 + param_3 * 8 + 0x10);
  iVar1 = 0;
  do {
    if (psVar2 == (short *)0x0) {
      return;
    }
    if (*psVar2 == param_2) {
      if (param_4 != 0) {
        *(short **)(param_4 + iVar1 * 4) = psVar2;
      }
      iVar1 = iVar1 + 1;
      if (param_5 <= iVar1) {
        return;
      }
    }
    psVar2 = *(short **)(psVar2 + 0x98);
  } while( true );
}
