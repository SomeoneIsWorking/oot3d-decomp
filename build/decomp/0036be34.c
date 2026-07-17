// OoT3D decomp @ 0036be34  name=FUN_0036be34  size=292

/* WARNING: Removing unreachable block (ram,0x002e9a58) */
/* WARNING: Removing unreachable block (ram,0x002e9a64) */
/* WARNING: Removing unreachable block (ram,0x002e9a6c) */
/* WARNING: Removing unreachable block (ram,0x002e9a84) */
/* WARNING: Removing unreachable block (ram,0x002e9aa4) */

undefined4 FUN_0036be34(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 unaff_r4;
  
  func_0x00343f0c(param_1,param_1 + 0x224c);
  uVar3 = extraout_r3;
  if (((*puRam0036be98 & 1) == 0) &&
     (iVar2 = func_0x003679b4(puRam0036be98), uVar3 = extraout_r3_00, iVar2 != 0)) {
    func_0x0036788c(uRam0036be9c);
    uVar3 = extraout_r3_01;
  }
  iVar2 = iRam0036bea8;
  func_0x00340bdc(*(undefined4 *)(iRam0036bea8 + 8),0,0,uVar3,unaff_r4);
  iVar1 = func_0x002cd2b4(iVar2,param_2);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar2 + 0xf38) = 0xd;
    *(undefined4 *)(iVar2 + 0xfa4) = 3;
    return 1;
  }
  return 0;
}

