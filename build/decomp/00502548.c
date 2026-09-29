// OoT3D decomp @ 00502548  name=FUN_00502548  size=208

/* WARNING: Control flow encountered bad instruction data */

void FUN_00502548(byte param_1)

{
  byte *unaff_r7;
  byte *unaff_r8;
  byte unaff_r9;
  bool in_NG;
  bool in_ZR;
  bool in_CY;

  if (in_ZR) {
    param_1 = 0;
  }
  if (in_CY) {
    *unaff_r8 = param_1;
  }
  if (!in_NG) {
    param_1 = unaff_r9 & param_1 << 2;
  }
  if (in_ZR) {
    param_1 = param_1 & (byte)((uint)&stack0x00000000 >> (uint)param_1);
  }
  if (in_CY) {
    *unaff_r7 = param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
