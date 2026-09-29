// OoT3D decomp @ 004b29d0  name=FUN_004b29d0  size=52

void FUN_004b29d0(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  byte bVar1;

  bVar1 = (&DAT_004b2884)[param_4 >> 0x1a];
  if (param_3 < (int)(uint)(byte)(&DAT_004b28ec)[bVar1]) {
    FUN_004b4768();
  }
                    /* WARNING: Could not recover jumptable at 0x004b2a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_004b28c4 + *(int *)(&DAT_004b28c4 + (uint)bVar1 * 4)))();
  return;
}
