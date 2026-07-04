// OoT3D decomp @ 002de6b8  name=FUN_002de6b8  size=124

undefined4 FUN_002de6b8(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_218 [524];
  
  FUN_00324f44(auStack_218,param_2,UNK_002de734);
  uVar1 = FUN_00301300(auStack_218,0,0);
  while (iVar2 = FUN_0031b9c0(uVar1,0), iVar2 == 0) {
    software_interrupt(10);
  }
  uVar3 = FUN_00303ea8(uVar1);
  FUN_0031b99c(uVar1);
  return uVar3;
}

