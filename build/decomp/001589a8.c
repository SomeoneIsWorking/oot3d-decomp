// OoT3D decomp @ 001589a8  name=FUN_001589a8  size=282

/* WARNING: Control flow encountered bad instruction data */

void FUN_001589a8(int param_1,int param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_pc;
  undefined4 in_cr0;
  undefined4 in_cr3;
  undefined4 in_cr8;

  uVar2 = DAT_00158ad4;
  if (*(short *)(param_1 + 0x116) == 0x5005) {
    FUN_00373264(param_1,DAT_00158ad4);
  }
  else {
    FUN_00353804(param_1,0xfffffff3);
  }
  iVar3 = FUN_003769d8(param_2 + 0x28a0);
  if (iVar3 == 4) {
    iVar3 = FUN_00346964(param_2);
    if (iVar3 != 0) {
      FUN_003ff758(param_1 + 0x28,uVar2);
      iVar3 = FUN_00369f3c(param_2);
      uVar2 = DAT_00158ad8;
      if (iVar3 == 0) {
        iVar3 = FUN_00377a04();
        if (iVar3 != 0) {
          *(short *)(param_1 + 0x116) = (short)DAT_00158adc;
          if (param_1 != -1) {
            coprocessor_load(0,in_cr3,unaff_pc + 4);
            coprocessor_function(10,0xb,1,in_cr0,in_cr0,in_cr8);
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0x11,0x1591f2);
            (*pcVar1)();
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *(short *)(param_1 + 0x116) = (short)DAT_00158ae0;
        FUN_00375bcc(param_1,uVar2);
      }
      else {
        *(short *)(param_1 + 0x116) = (short)DAT_00158ae4;
        FUN_00375bcc(param_1,uVar2);
      }
      FUN_0036be34(param_2,*(undefined2 *)(param_1 + 0x116));
      return;
    }
  }
  else {
    iVar3 = FUN_00369a48(param_1,param_2);
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x918) = DAT_00158ae8;
    }
  }
  return;
}
