// OoT3D decomp @ 0030b3ac  name=FUN_0030b3ac  size=88

undefined4 FUN_0030b3ac(int *param_1)

{
  bool bVar1;
  int iVar2;

  if (*param_1 != 1) {
    do {
      iVar2 = *param_1;
      if (iVar2 != 0) {
        ClearExclusiveLocal();
        goto LAB_0030b3e4;
      }
      bVar1 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar1);
    *param_1 = -1;
LAB_0030b3e4:
    if (iVar2 != 0) {
      return 0;
    }
  }
  return 1;
}
