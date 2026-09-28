// OoT3D decomp @ 0033da8c  name=FUN_0033da8c  size=524

void FUN_0033da8c(byte *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 auStack_234 [524];
  byte *pbStack_28;

  iVar1 = iRam0033dc98;
  pbStack_28 = param_1 + param_2 * 0x80;
  while (*(short *)(pbStack_28 + 4) < 1) {
    if ((*puRam0033dc9c & 1) == 0) {
      uVar8 = func_0x003679b4(puRam0033dc9c,param_2);
      param_2 = (int)((ulonglong)uVar8 >> 0x20);
      if ((int)uVar8 != 0) {
        func_0x0031ff30(uRam0033dca0);
        param_2 = iRam0033dca8;
      }
    }
    func_0x0031fe84(uRam0033dca0,param_2);
    uVar2 = extraout_r1;
    if ((*puRam0033dcac & 1) == 0) {
      uVar8 = func_0x003679b4(puRam0033dcac);
      uVar2 = (int)((ulonglong)uVar8 >> 0x20);
      if ((int)uVar8 != 0) {
        func_0x0036788c(uRam0033dcb0);
        uVar2 = uRam0033dcb4;
      }
    }
    uVar6 = uRam0033dcb0;
    func_0x0031bebc(uRam0033dcb0,uVar2);
    func_0x0031bd30(uVar6);
    func_0x0031bb84(uVar6);
    param_2 = 0;
    software_interrupt(10);
    pbVar3 = param_1 + 4;
    iVar4 = 0;
    if (*param_1 != 0) {
      do {
        param_2 = (int)*(short *)pbVar3;
        if (param_2 < 0) {
          if (*(int *)(pbVar3 + 0xc) == 0) {
            iVar5 = iVar1 + param_2 * -0x44;
            if (*(int *)(iVar5 + 0x40) == 0) {
              uVar2 = func_0x00324fd0(iVar5);
              *(undefined4 *)(iVar5 + 0x40) = uVar2;
            }
            uVar6 = *(undefined4 *)(iVar5 + 0x40);
            *(undefined4 *)(pbVar3 + 8) = uVar6;
            uVar2 = func_0x0035010c(uVar6);
            *(undefined4 *)(pbVar3 + 4) = uVar2;
            iVar7 = (int)-*(short *)pbVar3;
            if (iVar7 == 0x14 || iVar7 == 0x15) {
              iVar7 = 0;
            }
            func_0x00324f44(auStack_234,iVar5,uRam0033dcb8);
            uVar8 = func_0x00324eac(auStack_234,uVar2,uVar6,iVar7,0);
            param_2 = (int)((ulonglong)uVar8 >> 0x20);
            *(int *)(pbVar3 + 0xc) = (int)uVar8;
          }
          else {
            uVar8 = func_0x0031b9c0(*(int *)(pbVar3 + 0xc),0);
            param_2 = (int)((ulonglong)uVar8 >> 0x20);
            if ((int)uVar8 != 0) {
              func_0x0031b99c(*(undefined4 *)(pbVar3 + 0xc));
              pbVar3[0xc] = 0;
              pbVar3[0xd] = 0;
              pbVar3[0xe] = 0;
              pbVar3[0xf] = 0;
              *(short *)pbVar3 = -*(short *)pbVar3;
              param_2 = extraout_r1_00;
              if (*(int *)(pbVar3 + 8) != 0) {
                func_0x0031b124(pbVar3 + 0x10,*(undefined4 *)(pbVar3 + 4),*(int *)(pbVar3 + 8),0);
                param_2 = extraout_r1_01;
              }
            }
          }
        }
        iVar4 = iVar4 + 1;
        pbVar3 = pbVar3 + 0x80;
      } while (iVar4 < (int)(uint)*param_1);
    }
  }
  return;
}
