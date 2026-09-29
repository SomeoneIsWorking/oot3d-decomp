// OoT3D decomp @ 001bc26c  name=FUN_001bc26c  size=160

void FUN_001bc26c(int param_1,int param_2)

{
  int iVar1;

  iVar1 = FUN_0037571c(param_2);
  if ((iVar1 != 0) && (*(int *)(&DAT_000022dc + param_2 + *(short *)(param_1 + 0xe88) * 4) != 0)) {
    *(undefined4 *)(param_1 + 200) = DAT_001bc30c;
    FUN_0035e3a4(param_1 + 0xcb8,0,(int)*(short *)(param_1 + 0xe90));
    FUN_0035e330(param_1 + 0xcb8);
    FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,0,DAT_001bc310,param_1,0);
    return;
  }
  *(undefined4 *)(param_1 + 200) = 0;
  return;
}
