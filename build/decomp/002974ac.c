// OoT3D decomp @ 002974ac  name=FUN_002974ac  size=88

void FUN_002974ac(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0x1d0) != '\0') {
    FUN_00357fd0(*(undefined4 *)(DAT_00297504 + param_2),*(undefined4 *)(param_1 + 0x178),
                 param_1 + 0x28);
    *(undefined1 *)(*(int *)(param_1 + 0x1d4) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x1d4),param_1 + 0x148);
    FUN_00372170(*(undefined4 *)(param_1 + 0x1d4),0);
    return;
  }
  return;
}
