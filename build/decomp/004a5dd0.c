// OoT3D decomp @ 004a5dd0  name=FUN_004a5dd0  size=52

void FUN_004a5dd0(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  byte bVar1;

  bVar1 = (&DAT_004a5c84)[param_4 >> 0x1a];
  if (param_3 < (int)(uint)(byte)(&DAT_004a5cec)[bVar1]) {
    FUN_004a7b68();
  }
                    /* WARNING: Could not recover jumptable at 0x004a5e00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_004a5cc4 + *(int *)(&DAT_004a5cc4 + (uint)bVar1 * 4)))();
  return;
}
