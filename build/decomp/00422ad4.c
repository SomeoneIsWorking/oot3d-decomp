// OoT3D decomp @ 00422ad4  name=FUN_00422ad4  size=424

int FUN_00422ad4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5,
                undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 *puStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 ***local_40;
  undefined4 local_3c;
  int local_38;
  int *piStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;

  piStack_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  local_28 = param_4;
  iVar2 = FUN_00435adc();
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    FUN_00343280(iVar2,0x118);
    piVar3 = (int *)FUN_00435c30(iVar2);
  }
  iVar2 = DAT_00422c7c;
  iVar4 = DAT_00422c7c;
  if (piVar3 != (int *)0x0) {
    local_40 = &local_40;
    local_38 = 0;
    local_3c = 1;
    puStack_58 = &local_50;
    local_50 = 0;
    local_4c = 0;
    local_44 = 1;
    local_48 = 0;
    local_5c = 2;
    uStack_54 = 0xc;
    local_60 = *(undefined4 *)(DAT_00422c80 + 0xc);
    iVar4 = FUN_002fe970(&local_60,&local_38,0,3,1,local_40,1,2,puStack_58,0xc,1,0);
    iVar1 = local_38;
    if (-1 < iVar4) {
      piVar5 = (int *)FUN_0030e6a8(DAT_00422c84);
      if (piVar5 == (int *)0x0) {
        software_interrupt(0x23);
        iVar4 = iVar2;
      }
      else {
        *piVar5 = DAT_00422c88;
        piVar5[1] = iVar1;
        iVar4 = FUN_00435634(piVar3,piVar5,local_30,uStack_2c,local_28,param_5,param_6);
        if (iVar4 < 0) {
          (**(code **)(*piVar5 + 0x20))(piVar5);
        }
        else {
          iVar4 = 0;
        }
      }
    }
    if (iVar4 < 0) {
      (**(code **)(*piVar3 + 0x28))(piVar3);
    }
    else {
      iVar4 = 0;
      param_5 = piVar3;
    }
  }
  if (iVar4 < 0) {
    return iVar4;
  }
  *param_1 = (int)param_5;
  return 0;
}
