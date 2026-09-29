// OoT3D decomp @ 00157484  name=FUN_00157484  size=164

/* WARNING: Control flow encountered bad instruction data */

void FUN_00157484(int param_1,int param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int unaff_pc;
  undefined4 in_cr0;
  undefined4 in_cr3;
  undefined4 in_cr8;

  uVar4 = DAT_001576f4;
  iVar6 = *(int *)(param_2 + 0x20ac);
  if (((*(uint *)(iVar6 + 0x1714) & 0x80) != 0) && (*(int *)(iVar6 + 0x124) == param_1)) {
    *(uint *)(iVar6 + 0x1714) = *(uint *)(iVar6 + 0x1714) & 0xffffff7f;
    *(undefined4 *)(iVar6 + 0x124) = 0;
    *(undefined2 *)(iVar6 + 0x2238) = 200;
    FUN_00374bb8(uVar4,uVar4,param_2,param_1,(int)*(short *)(param_1 + 0x36));
    *(undefined2 *)(DAT_001576f8 + param_1) = 0;
  }
  uVar3 = uRam00157728;
  uVar2 = uRam00157724;
  uVar4 = DAT_00157704;
  if (*(short *)(DAT_001576fc + param_1) != 0) {
    return;
  }
  if (*(short *)(param_1 + 0x1c) != 0) {
    uVar5 = (int)(short)(*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe)) + 0x4000;
    if (*(char *)(param_1 + 0xb7) == '\0') {
      if (uVar5 < 0x8001) {
        FUN_00374a58(DAT_00157700,param_1 + 0x1e4,0xb);
        *(undefined4 *)(param_1 + 0x6c) = uVar2;
      }
      else {
        FUN_00374a58(DAT_00157700,param_1 + 0x1e4,0xb);
        *(undefined4 *)(param_1 + 0x6c) = uVar3;
      }
      *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
      *(undefined2 *)(param_1 + 0x8f6) = 0x2d;
      *(undefined4 *)(param_1 + 0x8ec) = 0;
      FUN_00375bcc(param_1,uVar4);
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      uVar4 = uRam0015772c;
    }
    else {
      if (uVar5 < 0x8001) {
        FUN_00374a58(DAT_00157700,param_1 + 0x1e4,9);
        *(undefined4 *)(param_1 + 0x6c) = uVar2;
      }
      else {
        FUN_00374a58(DAT_00157700,param_1 + 0x1e4,10);
        *(undefined4 *)(param_1 + 0x6c) = uVar3;
      }
      *(undefined2 *)(param_1 + 0x8f6) = 8;
      *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
      *(undefined4 *)(param_1 + 0x8ec) = 0;
      FUN_00375bcc(param_1,uVar4);
      uVar4 = uRam00157730;
    }
    *(undefined4 *)(param_1 + 0x8f0) = uVar4;
    return;
  }
  coprocessor_load(2,in_cr0,param_1 + 0x3c8);
  UsageFault = 0;
  if (param_1 != 0xff) {
    coprocessor_load(0,in_cr3,unaff_pc + 4);
    coprocessor_function(10,0xb,1,in_cr0,in_cr0,in_cr8);
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0x11,0x1591f2);
    (*pcVar1)();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
