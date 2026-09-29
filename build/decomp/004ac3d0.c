// OoT3D decomp @ 004ac3d0  name=FUN_004ac3d0  size=52

void FUN_004ac3d0(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  byte bVar1;

  bVar1 = (&DAT_004ac284)[param_4 >> 0x1a];
  if (param_3 < (int)(uint)(byte)(&DAT_004ac2ec)[bVar1]) {
    FUN_004ae168();
  }
                    /* WARNING: Could not recover jumptable at 0x004ac400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_004ac2c4 + *(int *)(&DAT_004ac2c4 + (uint)bVar1 * 4)))();
  return;
}
