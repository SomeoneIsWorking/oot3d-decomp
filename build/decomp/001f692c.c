// OoT3D decomp @ 001f692c  name=FUN_001f692c  size=100

void FUN_001f692c(int param_1,int param_2)

{
  char cVar1;
  int iVar2;

  iVar2 = FUN_00339f0c();
  if ((iVar2 != 0) && (*(char *)(iRam001f6990 + param_2) == '\0')) {
    *(undefined1 *)(param_1 + 0x1b0) = 1;
  }
  if (('\0' < *(char *)(param_1 + 0x1b0)) &&
     (cVar1 = *(char *)(param_1 + 0x1b0) + -1, *(char *)(param_1 + 0x1b0) = cVar1, cVar1 == '\0')) {
    FUN_00342230();
  }
                    /* WARNING: Could not recover jumptable at 0x001f698c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x1a8))(param_1,param_2);
  return;
}
