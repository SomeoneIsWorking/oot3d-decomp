// OoT3D decomp @ 00198288  name=FUN_00198288  size=564

void FUN_00198288(int param_1,uint param_2)

{
  short sVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int unaff_r8;
  int unaff_pc;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr2;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr11;
  undefined4 in_cr13;
  undefined4 in_cr15;
  float fVar8;
  undefined4 in_stack_00000188;

  iVar7 = *(int *)(param_2 + 0x20ac);
  *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + 0x280;
  iVar4 = DAT_00198440;
  if (*(int *)(param_1 + 0x94) < DAT_0019843c) {
    if (*(char *)(DAT_00198440 + 0xe) == '\x01') {
      sVar1 = *(short *)(param_2 + 0x104);
      if (sVar1 == 1) {
        if (*(char *)(param_1 + 3) == '\x02') {
          iVar4 = param_2 + 0x2000;
          *(int *)(iVar4 * 2) = iVar4;
          coprocessor_load(0,in_cr0,unaff_pc);
          coprocessor_movefromRt(2,5,1,in_cr0,in_cr5);
          coprocessor_load(2,in_cr6,unaff_pc + 0xc0);
          coprocessor_movefromRt(10,5,1,in_cr13,in_cr11);
          coprocessor_load(0,in_cr1,unaff_pc + 0x208);
          coprocessor_load(0,in_cr1,param_1 + 0x140);
          coprocessor_movefromRt(0,0,7,in_cr0,in_cr15);
          coprocessor_moveto(0,1,3,uRam0000002a,in_cr0,in_cr0);
          iVar7 = iRam0019cbf0 * 4;
          coprocessor_movefromRt(3,5,4,in_cr0,in_cr2);
          func_0x0059ded4(DAT_0019cd20,*(undefined4 *)(param_1 + 0x80),iRam0019cbf0 + unaff_r8,2,
                          in_stack_00000188,uRam0000002a,2,iVar4 * 9);
          func_0x0059ded8();
          coprocessor_moveto(10,5,7,0x19d899,in_cr15,in_cr15);
          *(undefined4 *)(iVar7 + 0x2c) = *(undefined4 *)(iVar7 + 0x338);
          *(undefined4 *)(iVar7 + 0x30) = *(undefined4 *)(iVar7 + 0x33c);
          coprocessor_store(6,in_cr0,iVar7 + 0x3f8);
          software_hlt(10);
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0x50,0x19def2);
          (*pcVar2)();
        }
      }
      else {
        if (sVar1 == 0xb) {
          param_2 = (uint)*(byte *)(param_1 + 3);
        }
        if ((((sVar1 == 0xb && param_2 == 2) && ((int)*(float *)(param_1 + 8) == -0x5c8)) &&
            ((int)*(float *)(param_1 + 0xc) == 200)) &&
           (((int)*(float *)(param_1 + 0x10) == -1000 && (*(char *)(iVar7 + 0x1a9) != '\x11')))) {
          return;
        }
      }
    }
    FUN_00376a60(5);
    uVar6 = DAT_00198450;
    uVar5 = DAT_0019844c;
    *DAT_00198448 = *DAT_00198448 + 1;
    FUN_0037547c(DAT_00198454,0,4,uVar6,uVar6,uVar5);
    iVar3 = DAT_00198464;
    fVar8 = DAT_00198458;
    uVar5 = *(undefined4 *)(iVar7 + 0x2c);
    uVar6 = *(undefined4 *)(iVar7 + 0x30);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar7 + 0x28);
    *(undefined4 *)(param_1 + 0x2c) = uVar5;
    *(undefined4 *)(param_1 + 0x30) = uVar6;
    fVar8 = *(float *)(param_1 + 0x2c) + fVar8;
    *(float *)(param_1 + 0x2c) = fVar8;
    if (*(int *)(iVar4 + 4) == 0) {
      *(float *)(param_1 + 0x2c) = fVar8 + DAT_0019845c;
    }
    *(undefined4 *)(param_1 + 0x70) = DAT_00198460;
    *(undefined2 *)(iVar3 + param_1) = 0x17;
    *(undefined4 *)(param_1 + 0x1a4) = DAT_00198468;
  }
  return;
}
