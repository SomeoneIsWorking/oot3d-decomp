// OoT3D decomp @ 0043835c  name=FUN_0043835c  size=104

void FUN_0043835c(char *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;

  if (*param_1 == '\0') {
    iVar3 = 0;
    uVar1 = (uint)((ulonglong)param_3 * (ulonglong)DAT_004383c4 >> 0x26);
    if (uVar1 != 0) {
      do {
        iVar2 = 0;
        if (param_2 != 0) {
          iVar2 = FUN_0044b540();
        }
        FUN_0030cab0(param_1 + 0x10,param_1 + 0x14,iVar2 + 0x58);
        iVar3 = iVar3 + 1;
        param_2 = param_2 + 0x60;
      } while (iVar3 < (int)uVar1);
    }
    *param_1 = '\x01';
  }
  return;
}
