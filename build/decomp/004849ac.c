// OoT3D decomp @ 004849ac  name=FUN_004849ac  size=92

undefined4 FUN_004849ac(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar3 = 0;
  do {
    for (iVar2 = *(int *)(param_2 + iVar3 * 8 + 0x10); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x130))
    {
      iVar1 = FUN_004895d0(param_1 + 0x3a58,(int)*(char *)(iVar2 + 0x1e));
      if (iVar1 == 0) {
        return 0;
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0xc);
  return 1;
}
