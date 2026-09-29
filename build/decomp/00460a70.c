// OoT3D decomp @ 00460a70  name=FUN_00460a70  size=148

void FUN_00460a70(int param_1,int param_2)

{
  int iVar1;

  iVar1 = DAT_00460b04;
  if (*(char *)(DAT_00460b04 + 0x5a2) != '\0') {
    if (*(char *)(DAT_00460b08 + param_1) == '\x14') {
      *(undefined1 *)(DAT_00460b04 + 0x5a2) = 0;
    }
    else if (*(char *)(param_2 + 8) == '\0') {
      *(undefined4 *)(DAT_00460b04 + -0xff8) = DAT_00460b0c;
      *(undefined1 *)(iVar1 + 0x5a2) = 1;
      goto LAB_00460ad8;
    }
  }
  if (*(int *)(iVar1 + -0xff8) < DAT_00460b10) {
    return;
  }
LAB_00460ad8:
  FUN_00479cd8(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00460afc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_00460b14 + (uint)*(byte *)(param_2 + 8) * 4))(param_1,param_2);
  return;
}
